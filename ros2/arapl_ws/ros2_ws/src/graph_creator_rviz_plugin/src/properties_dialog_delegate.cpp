#include "graph_creator_rviz_plugin/properties_dialog_delegate.hpp"
#include <rclcpp/rclcpp.hpp>

PropertiesDialogItemDelegate::PropertiesDialogItemDelegate(QObject* parent)
  : QItemDelegate(parent),
    m_ui_prop_dialog(new Ui::propertiesDialog),
    m_key_value_model(new QStandardItemModel)
{
}

PropertiesDialogItemDelegate::~PropertiesDialogItemDelegate()
{
  delete m_ui_prop_dialog;
}

void PropertiesDialogItemDelegate::addKeyValueButtonClicked()
{
  RCLCPP_INFO(rclcpp::get_logger("properties_dialog_delegate"), "Add key value button clicked");
  QStandardItem* item = new QStandardItem();
  m_key_value_model->appendRow(item);
  m_ui_prop_dialog->keyValueTableView->setModel(m_key_value_model);
}

void PropertiesDialogItemDelegate::deleteKeyValueButtonClicked()
{
  RCLCPP_INFO(rclcpp::get_logger("properties_dialog_delegate"), "Delete key value button clicked");
  QModelIndex index = m_ui_prop_dialog->keyValueTableView->selectionModel()->currentIndex();
  m_key_value_model->removeRow(index.row());
  m_ui_prop_dialog->keyValueTableView->setModel(m_key_value_model);
}

QWidget* PropertiesDialogItemDelegate::createEditor(QWidget* parent, 
                                                     const QStyleOptionViewItem& option, 
                                                     const QModelIndex& index) const
{
  (void)option;     // Suppress unused parameter warning
  (void)index;      // Suppress unused parameter warning
  
  QDialog* dialog = new QDialog(parent);
  m_ui_prop_dialog->setupUi(dialog);

  // Set existing values
  m_key_value_model->clear();
  m_key_value_model->setColumnCount(2);
  m_key_value_model->setHorizontalHeaderLabels({"Key", "Value"});

  for (auto it = m_key_value_qmap.begin(); it != m_key_value_qmap.end(); ++it)
  {
    QList<QStandardItem*> items;
    items.append(new QStandardItem(it.key()));
    items.append(new QStandardItem(it.value()));
    m_key_value_model->appendRow(items);
  }

  m_ui_prop_dialog->keyValueTableView->setModel(m_key_value_model);

  // Connect buttons
  connect(m_ui_prop_dialog->addKeyValuePushButton, &QPushButton::clicked, 
          this, &PropertiesDialogItemDelegate::addKeyValueButtonClicked);
  connect(m_ui_prop_dialog->deleteKeyValuePushButton, &QPushButton::clicked, 
          this, &PropertiesDialogItemDelegate::deleteKeyValueButtonClicked);

  dialog->exec();
  return dialog;
}

void PropertiesDialogItemDelegate::setEditorData(QWidget* editor, const QModelIndex& index) const
{
  // No implementation needed - data is already set in createEditor
  (void)editor;     // Suppress unused parameter warning
  (void)index;      // Suppress unused parameter warning
  
}

void PropertiesDialogItemDelegate::setModelData(QWidget* editor, QAbstractItemModel* model, 
                                                const QModelIndex& index) const
{
  // Store the key-value pairs
  m_key_value_qmap.clear();
  
  (void)editor;     // Suppress unused parameter warning

  for (int i = 0; i < m_key_value_model->rowCount(); ++i)
  {
    QModelIndex key_index = m_key_value_model->index(i, 0);
    QModelIndex value_index = m_key_value_model->index(i, 1);
    
    QString key = m_key_value_model->data(key_index).toString();
    QString value = m_key_value_model->data(value_index).toString();
    
    if (!key.isEmpty())
    {
      m_key_value_qmap.insert(key, value);
    }
  }

  // Set a summary string in the table
  QString summary = QString("Properties (%1)").arg(m_key_value_qmap.size());
  model->setData(index, summary, Qt::EditRole);
}

void PropertiesDialogItemDelegate::addKeyValueProperty(const std::string& key, 
                                                       const std::string& value)
{
  m_key_value_qmap.insert(QString::fromStdString(key), QString::fromStdString(value));
}

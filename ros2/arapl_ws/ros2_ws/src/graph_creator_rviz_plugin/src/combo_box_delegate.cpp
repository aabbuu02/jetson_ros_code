#include "graph_creator_rviz_plugin/combo_box_delegate.hpp"
#include <QComboBox>

ComboBoxItemDelegate::ComboBoxItemDelegate(QObject* parent)
  : QStyledItemDelegate(parent)
{
}

ComboBoxItemDelegate::~ComboBoxItemDelegate()
{
}

void ComboBoxItemDelegate::addItemsToComboBox(std::vector<std::string> item_names)
{
  m_item_names = item_names;
}

void ComboBoxItemDelegate::setCurrentItemInComboBox(int item_index)
{
  m_current_item_idx = item_index;
}

QWidget* ComboBoxItemDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, 
                                            const QModelIndex& index) const
{
  (void)option;     // Suppress unused parameter warning
  (void)index;      // Suppress unused parameter warning
  
  // Create the combobox and populate it
  QComboBox* cb = new QComboBox(parent);
  for (size_t i = 0; i < m_item_names.size(); ++i)
  {
    cb->addItem(QString::fromStdString(m_item_names.at(i)), static_cast<int>(i));
  }
  cb->setCurrentIndex(m_current_item_idx);
  return cb;
}

void ComboBoxItemDelegate::setEditorData(QWidget* editor, const QModelIndex& index) const
{
  QComboBox* cb = qobject_cast<QComboBox*>(editor);
  Q_ASSERT(cb);
  
  // Get the index of the text in the combobox that matches the current value of the item
  const QString currentText = index.data(Qt::EditRole).toString();
  const int cbIndex = cb->findText(currentText);
  
  // If it is valid, adjust the combobox
  if (cbIndex >= 0)
  {
    cb->setCurrentIndex(cbIndex);
  }
}

void ComboBoxItemDelegate::setModelData(QWidget* editor, QAbstractItemModel* model, 
                                        const QModelIndex& index) const
{
  QComboBox* cb = qobject_cast<QComboBox*>(editor);
  Q_ASSERT(cb);
  model->setData(index, cb->currentText(), Qt::EditRole);
}

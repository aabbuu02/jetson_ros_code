#include "graph_creator_rviz_plugin/double_spin_box_delegate.hpp"
#include <QDoubleSpinBox>

DoubleSpinBoxDelegate::DoubleSpinBoxDelegate(QObject* parent)
  : QStyledItemDelegate(parent)
{
}

DoubleSpinBoxDelegate::~DoubleSpinBoxDelegate()
{
}

QWidget* DoubleSpinBoxDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, 
                                             const QModelIndex& index) const
{
  (void)option;     // Suppress unused parameter warning
  (void)index;      // Suppress unused parameter warning
  
  // Create the double spin box delegate
  QDoubleSpinBox* dsb = new QDoubleSpinBox(parent);
  dsb->setRange(m_minimum, m_maximum);
  dsb->setDecimals(m_precision);
  dsb->setSingleStep(m_step_size);
  dsb->setValue(m_current_value);
  return dsb;
}

void DoubleSpinBoxDelegate::setEditorData(QWidget* editor, const QModelIndex& index) const
{
  QDoubleSpinBox* dsb = qobject_cast<QDoubleSpinBox*>(editor);
  Q_ASSERT(dsb);
  double value = index.model()->data(index, Qt::EditRole).toDouble();
  dsb->setValue(value);
}

void DoubleSpinBoxDelegate::setModelData(QWidget* editor, QAbstractItemModel* model, 
                                         const QModelIndex& index) const
{
  QDoubleSpinBox* dsb = qobject_cast<QDoubleSpinBox*>(editor);
  Q_ASSERT(dsb);
  dsb->interpretText();
  double value = dsb->value();
  model->setData(index, value, Qt::EditRole);
}

void DoubleSpinBoxDelegate::setDoubleSpinBoxProperties(double minimum, double maximum, 
                                                       int precision, double step_size)
{
  m_minimum = minimum;
  m_maximum = maximum;
  m_precision = precision;
  m_step_size = step_size;
}

void DoubleSpinBoxDelegate::setCurrentValue(double value)
{
  m_current_value = value;
}

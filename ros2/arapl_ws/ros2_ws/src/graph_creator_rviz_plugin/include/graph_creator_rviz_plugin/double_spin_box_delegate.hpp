#pragma once

#include <QStyledItemDelegate>
#include <QDoubleSpinBox>
#include <QAbstractItemModel>

class DoubleSpinBoxDelegate : public QStyledItemDelegate
{
  Q_OBJECT

public:
  DoubleSpinBoxDelegate(QObject* parent = nullptr);
  ~DoubleSpinBoxDelegate();

  QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, 
                       const QModelIndex& index) const override;
  void setEditorData(QWidget* editor, const QModelIndex& index) const override;
  void setModelData(QWidget* editor, QAbstractItemModel* model, 
                   const QModelIndex& index) const override;

  void setDoubleSpinBoxProperties(double minimum, double maximum, int precision, double step_size);
  void setCurrentValue(double value);

private:
  double m_minimum = 0.0;
  double m_maximum = 1000.0;
  int m_precision = 4;
  double m_step_size = 0.1;
  double m_current_value = 0.0;
};

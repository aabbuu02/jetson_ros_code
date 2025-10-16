#pragma once

#include <QItemDelegate>
#include <QDialog>
#include <QStandardItemModel>
#include <QMap>
#include <string>

#include "properties_ui.hpp"

class PropertiesDialogItemDelegate : public QItemDelegate
{
  Q_OBJECT

public:
  PropertiesDialogItemDelegate(QObject* parent = nullptr);
  ~PropertiesDialogItemDelegate();

  QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, 
                       const QModelIndex& index) const override;
  void setEditorData(QWidget* editor, const QModelIndex& index) const override;
  void setModelData(QWidget* editor, QAbstractItemModel* model, 
                   const QModelIndex& index) const override;

  void addKeyValueProperty(const std::string& key, const std::string& value);

private Q_SLOTS:
  void addKeyValueButtonClicked();
  void deleteKeyValueButtonClicked();

private:
  // TODO: Better way to track the key value map needs to be implemented
  mutable QMap<QString, QString> m_key_value_qmap;
  Ui::propertiesDialog* m_ui_prop_dialog;
  QStandardItemModel* m_key_value_model;
};

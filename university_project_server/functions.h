#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QString>
#include <QByteArray>
#include <QMap>
#include <QStringList>
#include "md5.h"

/// \brief log_in отвечавет за вход в систему
/// \param QString login - логин пользователя, QString password - пароль
/// \return QByteArray response - сообщение-ответ сервера
///
QByteArray log_in(QString login, QString password);


/// \brief log_out отвечавет за выход из систему
/// \param void
/// \return QByteArray response - сообщение-ответ сервера
///
QByteArray log_out();


/// \brief change_role отвечавет за изменение роли
/// \param QString username - лоигн пользователя, QString new_role - новый уровень доступа
/// \return QByteArray response - сообщение-ответ сервера
///
QByteArray change_role(QString username, QString new_role);


/// \brief change_pass отвечавет за изменение пароля
/// \param QString old_pass - старый пароль, QString new_pass
/// \return QByteArray response - сообщение-ответ сервера
///
QByteArray change_pass(QString login, QString new_pass);


/// \brief add_user отвечавет за добавление пользователя
/// \param QString username - лоигн пользователя, QString pass - его пароль от аккаунта, int new_role - новый уровень доступа
/// \return QByteArray response - сообщение-ответ сервера
///
QByteArray add_user(QString username, QString pass, int new_role);


/// \brief show_pass отвечавет за показ пароля
/// \param QString account - логин пользователя
/// \return QByteArray response - сообщение-ответ сервера
///
QByteArray show_pass(QString account);


/// \brief invalidRequest возвращает предупреждение, если введён неверный запрос
/// \param void
/// \return QByteArray response - сообщение-ответ сервера
///
QByteArray invalidRequest();


///
/// \brief parse получает сообщение пользователя и вызывает соответствующую функцию
/// \param QString message - сообщение для парсинга
/// \return QByteArray response - сообщение-ответ сервера
///
QByteArray parse(QString message);
#endif // FUNCTIONS_H


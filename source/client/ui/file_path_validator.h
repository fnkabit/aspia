//
// Aspia Project
// Copyright (C) 2018 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef ASPIA_CLIENT__UI__FILE_PATH_VALIDATOR_H_
#define ASPIA_CLIENT__UI__FILE_PATH_VALIDATOR_H_

#include <QValidator>

#include "base/macros_magic.h"

namespace aspia {

class FilePathValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FilePathValidator(QObject* parent);

    // QValidator implementation.
    State validate(QString& input, int& pos) const override;
    void fixup(QString& input) const override;

signals:
    void invalidPathEntered() const;

private:
    DISALLOW_COPY_AND_ASSIGN(FilePathValidator);
};

} // namespace aspia

#endif // ASPIA_CLIENT__UI__FILE_PATH_VALIDATOR_H_

/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Virtual Keyboard module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 or (at your option) any later version
** approved by the KDE Free Qt Foundation. The licenses are as published by
** the Free Software Foundation and appearing in the file LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

import QtQuick 2.0
import QtQuick.VirtualKeyboard 2.1

/*!
    \qmltype InputPanel
    \inqmlmodule QtQuick.VirtualKeyboard

    \brief Provides the virtual keyboard UI.
    \ingroup qtvirtualkeyboard-qml

    The keyboard size is automatically calculated from the available
    width; that is, the keyboard maintains the aspect ratio specified by the current
    style. Therefore the application should only set the \l {Item::}{width} and \l {Item::}{y}
    coordinates of the InputPanel, and not the \l {Item::}{height}.

    As with \l {Qt Virtual Keyboard QML Types}{all other QML types} provided by
    the module, the \c QT_IM_MODULE environment variable must be set to
    \c qtvirtualkeyboard before using InputPanel. For more information, see
    \l {Loading the Plugin}.
*/

Item {
    id: inputPanel

    /*!
        \qmlproperty bool InputPanel::active
        \since QtQuick.VirtualKeyboard 2.0

        This property reflects the active status of the input panel.
        The keyboard should be made visible to the user when this property is
        \c true.
    */
    property alias active: keyboard.active

    /*! \internal */
    property alias keyboard: keyboard

    SelectionControl {
        objectName: "selectionControl"
        x: -parent.x
        y: -parent.y
        enabled: active && !keyboard.fullScreenMode
    }

    implicitHeight: keyboard.height
    Keyboard {
        id: keyboard
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
    }
    MouseArea {
        z: -1
        anchors.fill: keyboard
        enabled: active
    }
}

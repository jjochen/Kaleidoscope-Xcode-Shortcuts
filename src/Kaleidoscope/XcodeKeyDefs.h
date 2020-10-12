/* -*- mode: c++ -*-
 * Kaleidoscope-Xcode-Shortcuts -- Kaleidoscope key definitions for Xcode shortcuts.
 *
 * Copyright (c) 2020 Jochen Pfeiffer
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
.* in the Software without restriction, including without limitation the rights
.* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
.* copies of the Software, and to permit persons to whom the Software is
.* furnished to do so, subject to the following conditions:
.*
.* The above copyright notice and this permission notice shall be included in all
.* copies or substantial portions of the Software.
.*
.* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
.* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
.* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
.* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
.* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
.* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
.* SOFTWARE.
 */

#pragma once

// File Menu
# define Key_XcodeNewEditor LCTRL(LGUI(Key_T))
# define Key_XcodeNewEditorBelow LCTRL(LALT(LGUI(Key_T)))
# define Key_XcodeOpenQuickly LSHIFT(LGUI(Key_O))
# define Key_XcodeCloseEditor LCTRL(LALT(LGUI(Key_W)))
# define Key_XcodeCloseOtherEditors LCTRL(LALT(LSHIFT(LGUI(Key_W))))

// Edit Menu
# define Key_XcodeUndo LGUI(Key_Z)
# define Key_XcodeRedo LSHIFT(LGUI(Key_Z))
# define Key_XcodeCut LGUI(Key_X)
# define Key_XcodeCopy LGUI(Key_C)
# define Key_XcodePaste LGUI(Key_V)
# define Key_XcodeCopySymbolName LCTRL(LSHIFT(LGUI(Key_C)))
# define Key_XcodeCopyQualifiedSymbolName LCTRL(LALT(LSHIFT(LGUI(Key_C))))
# define Key_XcodeShowSpelling LGUI(LSHIFT(Key_Semicolon))
# define Key_XcodeCheckSpelling LGUI(Key_Semicolon)

// View Menu
# define Key_XcodeFocusEditor LCTRL(LSHIFT(LGUI(Key_Enter)))
# define Key_XcodeShowRelatedItems LCTRL(Key_1)
# define Key_XcodeToggleCodeReview LALT(LSHIFT(LGUI(Key_Enter)))
# define Key_XcodeResetAssistantSelection LALT(LSHIFT(LGUI(Key_Z)))
# define Key_XcodeActivateConsole LSHIFT(LGUI(Key_C))
# define Key_XcodeToggleDebugArea LSHIFT(LGUI(Key_Y))
# define Key_XcodeShowLibrary LSHIFT(LGUI(Key_L))
# define Key_XcodeToggleInspectors LALT(LGUI(Key_0))

// Find Menu
# define Key_XcodeFindInWorkspace LSHIFT(LGUI(Key_F))
# define Key_XcodeFindAndReplaceInWorkspace LALT(LSHIFT(LGUI(Key_F)))
# define Key_XcodeFindNextInWorkspace LCTRL(LGUI(Key_G))
# define Key_XcodeFindPreviousInWorkspace LCTRL(LSHIFT(LGUI(Key_G)))
# define Key_XcodeFindSelectedSymbolInWorkspace LCTRL(LSHIFT(LGUI(Key_F)))
# define Key_XcodeFindCallHierarchy LCTRL(LSHIFT(LGUI(Key_H)))
# define Key_XcodeFindInFile LGUI(Key_F)
# define Key_XcodeFindAndReplaceInFile LGUI(LALT(Key_F))
# define Key_XcodeFindNextInFile LGUI(Key_G)
# define Key_XcodeFindPreviousInFile LSHIFT(LGUI(Key_G))

// Navigate Menu
# define Key_XcodeRevealInProjectNavigator LSHIFT(LGUI(Key_J))
# define Key_XcodeRevealInDebugNavigator LSHIFT(LGUI(Key_D))
# define Key_XcodeOpenInNextEditor LALT(LGUI(Key_Comma))
# define Key_XcodeOpenIn LSHIFT(LALT(LGUI(Key_Comma)))
# define Key_XcodeMoveFocusToNextArea LALT(LGUI(Key_Backtick))
# define Key_XcodeMoveFocusToPreviousArea LSHIFT(LALT(LGUI(Key_Backtick)))
# define Key_XcodeMoveFocusToNextEditor LCTRL(Key_Backtick)
# define Key_XcodeMoveFocusToPreviousEditor LSHIFT(LCTRL(Key_Backtick))
# define Key_XcodeMoveFocusToEditor LGUI(Key_Backtick)
# define Key_XcodeGoForward LCTRL(LGUI(Key_RightArrow))
# define Key_XcodeGoForwardInNextEditor LCTRL(LALT(LGUI(Key_RightArrow)))
# define Key_XcodeGoBack LGUI(LCTRL(Key_LeftArrow))
# define Key_XcodeGoBackInNextEditor LCTRL(LALT(LGUI(Key_LeftArrow)))
# define Key_XcodeJumpToSelection LCTRL(LGUI(Key_L))
# define Key_XcodeJumpToDefinition LCTRL(LGUI(Key_J))
# define Key_XcodeJumpToDefinitionInNextEditor LCTRL(LALT(LGUI(Key_J)))
# define Key_XcodeJumpToNextIssue LGUI(Key_Quote)
# define Key_XcodeFixNextIssue LCTRL(LGUI(Key_Quote))
# define Key_XcodeJumpToPreviousIssue LGUI(LSHIFT(Key_Quote))
# define Key_XcodeFixPreviousIssue LCTRL(LGUI(LSHIFT(Key_Quote)))
# define Key_XcodeJumpToNextCounterpart LCTRL(LGUI(Key_UpArrow))
# define Key_XcodeJumpToNextCounterpartInNextEditor LCTRL(LALT(LGUI(Key_UpArrow)))
# define Key_XcodeJumpToPreviousCounterpart LCTRL(LGUI(Key_DownArrow))
# define Key_XcodeJumpToPreviousCounterpartInNextEditor LCTRL(LALT(LGUI(Key_DownArrow)))
# define Key_XcodeJumpTo LGUI(Key_L)
# define Key_XcodeJumpToNextChange LCTRL(Key_Backslash)
# define Key_XcodeJumpToPreviousChange LCTRL(LSHIFT(Key_Backslash))

// Editor Menu
# define Key_XcodeAssistant LCTRL(LALT(LGUI(Key_Enter)))
# define Key_XcodeShowCodeActions LSHIFT(LGUI(Key_A))
# define Key_XcodeEditAllInScope LCTRL(LGUI(Key_E))
# define Key_XcodeRefactorRename LCTRL(LALT(LSHIFT(LGUI(Key_R)))) // custom
# define Key_XcodeRefactorExtractToMethod LCTRL(LALT(LSHIFT(LGUI(Key_X)))) // custom
# define Key_XcodeRefactorExtractToVariable LCTRL(LALT(LSHIFT(LGUI(Key_V)))) // custom
# define Key_XcodeFixAllIssues LCTRL(LALT(LGUI(Key_F)))
# define Key_XcodeShowAllIssues LCTRL(LGUI(Key_M))
# define Key_XcodeMoveLineUp LALT(LGUI(Key_LeftBracket))
# define Key_XcodeMoveLineDown LALT(LGUI(Key_RightBracket))
# define Key_XcodeCommentSelection LGUI(Key_Slash)

// Product Menu
# define Key_XcodeClean LSHIFT(LGUI(Key_K))
# define Key_XcodeCleanBuildFolder LALT(LSHIFT(LGUI(Key_K)))

// Debug Menu
# define Key_XcodePauseContinue LCTRL(LGUI(Key_Y))
# define Key_XcodeContinueToCurrentLine LCTRL(LGUI(Key_C))
# define Key_XcodeActivateBreakpoints LGUI(Key_Y)
# define Key_XcodeAddBreakpointAtCurrentLine LGUI(Key_Backslash)

// Source Control Menu
# define Key_XcodeCommit LALT(LGUI(Key_C))
# define Key_XcodePull LALT(LGUI(Key_X))

// Transformation Menu
# define Key_XcodeLowercaseWord LCTRL(LALT(LSHIFT(LGUI(Key_L)))) // custom
# define Key_XcodeUppercaseWord LCTRL(LALT(LSHIFT(LGUI(Key_U)))) // custom
# define Key_XcodeCapitalizeWord LCTRL(LSHIFT(LGUI(Key_U))) // custom

// Mark & Yank
# define Key_XcodeDeleteToMark LCTRL(Key_W)
# define Key_XcodeSetMark LCTRL(LSHIFT(Key_2))
# define Key_XcodeYank LCTRL(Key_Y)

// Selection
# define Key_XcodeSelectLine LCTRL(LSHIFT(LGUI(Key_L))) // custom


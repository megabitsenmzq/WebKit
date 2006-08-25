/*
 * Copyright (C) 2006 Apple Computer, Inc.  All rights reserved.
 * Copyright (C) 2006 Michael Emmel mike.emmel@gmail.com
 * Copyright (C) 2006 George Staikos <staikos@kde.org>
 * Copyright (C) 2006 Dirk Mueller <mueller@kde.org>
 * Copyright (C) 2006 Nikolas Zimmermann <zimmermann@kde.org>
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"

#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
#include "Frame.h"
#include "Font.h"
#include "FileButton.h"
#include "IntPoint.h"
#include "Widget.h"
#include "GraphicsContext.h"
#include "TextField.h"
#include "Slider.h"
#include "Cursor.h"
#include "loader.h"
#include "FrameView.h"
#include "KURL.h"
#include "ScrollBar.h"
#include "PlatformScrollBar.h"
#include "JavaAppletWidget.h"
#include "ScrollBar.h"
#include "Path.h"
#include "PlatformMouseEvent.h"
#include "CookieJar.h"
#include "Screen.h"
#include "History.h"
#include "Language.h"
#include "LocalizedStrings.h"
#include "PlugInInfoStore.h"
#include "RenderTheme.h"
#include "TextBoundaries.h"
#include "AXObjectCache.h"

using namespace WebCore;

#define notImplemented() do { fprintf(stderr, "FIXME: UNIMPLEMENTED: %s:%d\n", __FILE__, __LINE__); } while(0)

JavaAppletWidget::JavaAppletWidget(IntSize const&, Element*, WTF::HashMap<String, String> const&) { notImplemented(); }

FloatRect Font::selectionRectForComplexText(const TextRun&, const TextStyle&, const IntPoint&, int) const { notImplemented(); return FloatRect(); }
int Font::offsetForPositionForComplexText(const TextRun&, const TextStyle&, int, bool) const { notImplemented(); return 0; }


void WebCore::refreshPlugins(bool) { notImplemented(); }

Color WebCore::focusRingColor() { notImplemented(); return 0xFF0000FF; }

void Image::drawTiled(GraphicsContext*, const FloatRect&, const FloatRect&, TileRule, TileRule, CompositeOperator) { notImplemented(); }

namespace WebCore {    

void TextField::selectAll() { notImplemented(); }
void TextField::addSearchResult() { notImplemented(); }
int TextField::selectionStart() const { notImplemented(); return 0; }
bool TextField::hasSelectedText() const { notImplemented(); return 0; }
String TextField::selectedText() const { notImplemented(); return String(); }
void TextField::setAutoSaveName(String const&) { notImplemented(); }
bool TextField::checksDescendantsForFocus() const { notImplemented(); return false; }
void TextField::setSelection(int,int) { notImplemented(); }
void TextField::setMaxResults(int) { notImplemented(); }
bool TextField::edited() const { notImplemented(); return 0; }
Widget::FocusPolicy TextField::focusPolicy() const { notImplemented(); return NoFocus; }
TextField::TextField(TextField::Type) { notImplemented(); }
TextField::~TextField() { notImplemented(); }
void TextField::setFont(WebCore::Font const&) { notImplemented(); }
void TextField::setAlignment(HorizontalAlignment) { notImplemented(); }
void TextField::setWritingDirection(TextDirection) { notImplemented(); }
int TextField::maxLength() const { notImplemented(); return 0; }
void TextField::setMaxLength(int) { notImplemented(); }
String TextField::text() const { notImplemented(); return String(); }
void TextField::setText(String const&) { notImplemented(); }
int TextField::cursorPosition() const { notImplemented(); return 0; }
void TextField::setCursorPosition(int) { notImplemented(); }
void TextField::setEdited(bool) { notImplemented();  }
void TextField::setReadOnly(bool) { notImplemented(); }
void TextField::setPlaceholderString(String const&) { notImplemented();  }
void TextField::setColors(Color const&,Color const&) { notImplemented();  }
IntSize TextField::sizeForCharacterWidth(int) const { notImplemented(); return IntSize(); }
int TextField::baselinePosition(int) const { notImplemented(); return 0; }
void TextField::setLiveSearch(bool) { notImplemented(); }

Slider::Slider() { notImplemented(); }
IntSize Slider::sizeHint() const { notImplemented(); return IntSize(); }
Slider::~Slider() { notImplemented(); }
void Slider::setValue(double) { notImplemented(); }
void Slider::setMaxValue(double) { notImplemented(); }
void Slider::setMinValue(double) { notImplemented(); }
void Slider::setFont(WebCore::Font const&) { notImplemented(); }
double Slider::value() const { notImplemented(); return 0; }
Widget::FocusPolicy Slider::focusPolicy() const { notImplemented(); return NoFocus; }

ScrollBar::ScrollBar(ScrollBarClient *, ScrollBarOrientation) { notImplemented(); }
void ScrollBar::setSteps(int, int) { notImplemented(); }
bool ScrollBar::scroll(ScrollDirection, ScrollGranularity, float) { notImplemented(); return 0; }
bool ScrollBar::setValue(int) { notImplemented(); return 0; }
void ScrollBar::setKnobProportion(int, int) { notImplemented(); }

PlatformScrollBar::PlatformScrollBar(ScrollBarClient* client, ScrollBarOrientation orientation) : ScrollBar(client, orientation) { notImplemented(); }
PlatformScrollBar::~PlatformScrollBar() { notImplemented(); }
int PlatformScrollBar::width() const { notImplemented(); return 0; }
int PlatformScrollBar::height() const { notImplemented(); return 0; }
void PlatformScrollBar::setEnabled(bool) { notImplemented(); }
void PlatformScrollBar::paint(GraphicsContext*, const IntRect& damageRect) { notImplemented(); }
void PlatformScrollBar::setScrollBarValue(int v) { notImplemented(); }
void PlatformScrollBar::setKnobProportion(int visibleSize, int totalSize) { notImplemented(); }
void PlatformScrollBar::setRect(const IntRect&) { notImplemented(); }

PlatformMouseEvent::PlatformMouseEvent(const CurrentEventTag&) { notImplemented(); }

void CheckCacheObjectStatus(DocLoader*, CachedResource*) { notImplemented(); }
bool CheckIfReloading(WebCore::DocLoader*) { notImplemented(); return false; }
Vector<char> ServeSynchronousRequest(Loader*, DocLoader*, ResourceLoader*, KURL&, DeprecatedString&) { notImplemented(); return Vector<char>(); }
}

bool WebCore::historyContains(DeprecatedString const&) { notImplemented(); return false; }
String WebCore::submitButtonDefaultLabel() { return "Submit"; }
String WebCore::inputElementAltText() { return DeprecatedString(); }
String WebCore::resetButtonDefaultLabel() { return "Reset"; }
String WebCore::defaultLanguage() { return "en"; }


int WebCore::findNextSentenceFromIndex(UChar const*, int, int, bool) { notImplemented(); return 0; }
void WebCore::findSentenceBoundary(UChar const*, int, int, int*, int*) { notImplemented(); }
int WebCore::findNextWordFromIndex(UChar const*, int, int, bool) { notImplemented(); return 0; }
void WebCore::findWordBoundary(UChar const* str, int len, int position, int* start, int* end) {*start = position; *end = position; notImplemented(); }

void Frame::setNeedsReapplyStyles() { notImplemented(); }

int WebCore::screenDepthPerComponent(const Page*) { notImplemented(); return 0; }
bool WebCore::screenIsMonochrome(const Page*) { notImplemented(); return false; }

String WebCore::searchableIndexIntroduction() { notImplemented(); return String(); }

void WebCore::setFocusRingColorChangeFunction(void (*)()) { notImplemented(); }

void FrameView::updateBorder() { notImplemented(); }

bool AXObjectCache::gAccessibilityEnabled = false;

Vector<char> loadResourceIntoArray(const char* ) { notImplemented(); return Vector<char>(); }

PluginInfo* PlugInInfoStore::createPluginInfoForPluginAtIndex(unsigned) { notImplemented(); return 0; }
unsigned PlugInInfoStore::pluginCount() const { notImplemented(); return 0; }
bool WebCore::PlugInInfoStore::supportsMIMEType(const WebCore::String&) { notImplemented(); return false; }

FileButton::FileButton(Frame*) { notImplemented(); }
void FileButton::click(bool) { notImplemented(); }
IntSize FileButton::sizeForCharacterWidth(int) const { notImplemented(); return IntSize(); }
Widget::FocusPolicy FileButton::focusPolicy() const { notImplemented(); return NoFocus; }
WebCore::IntRect FileButton::frameGeometry() const { notImplemented(); return IntRect(); }
void FileButton::setFilename(DeprecatedString const&) { notImplemented(); }
int FileButton::baselinePosition(int) const { notImplemented(); return 0; }
void FileButton::setFrameGeometry(WebCore::IntRect const&) { notImplemented(); }
void FileButton::setDisabled(bool) { notImplemented(); }

namespace WebCore {
    
DeprecatedStringList supportedKeySizes() { notImplemented(); return DeprecatedStringList(); }
DeprecatedString signedPublicKeyAndChallengeString(unsigned keySizeIndex, const DeprecatedString &challengeString, const KURL &url) { return DeprecatedString(); }

}

// vim: ts=4 sw=4 et

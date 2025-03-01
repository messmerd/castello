/*
 * DISTRHO Plugin Framework (DPF)
 * Copyright (C) 2012-2019 Filipe Coelho <falktx@falktx.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any purpose with
 * or without fee is hereby granted, provided that the above copyright notice and this
 * permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD
 * TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN
 * NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
 * IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/**
   Allow to resize the UI when running on the Linux GTK web view
 */
#define HIPHOP_UI_LINUX_GTK_WEBVIEW_FAKE_VIEWPORT 1

/**
   The plugin name.@n
   This is used to identify your plugin before a Plugin instance can be created.
   @note This macro is required.
 */
#define DISTRHO_PLUGIN_NAME "Castello Reverb"

/**
   Number of audio inputs the plugin has.
   @note This macro is required.
 */
#define DISTRHO_PLUGIN_NUM_INPUTS 2

/**
   Number of audio outputs the plugin has.
   @note This macro is required.
 */
#define DISTRHO_PLUGIN_NUM_OUTPUTS 2

/**
   The plugin URI when exporting in LV2 format.
   @note This macro is required.
 */
#define DISTRHO_PLUGIN_URI "https://lucianoiam.com/castello-reverb"

/**
   The plugin id when exporting in CLAP format, in reverse URI form.
   @note This macro is required when building CLAP plugins
*/
#define DISTRHO_PLUGIN_CLAP_ID "com.lucianoiam.castello-reverb"

/**
   Wherever the plugin has a custom %UI.
   @see DISTRHO_UI_USE_NANOVG
   @see UI
 */
#define DISTRHO_PLUGIN_HAS_UI          1
#define DISTRHO_PLUGIN_HAS_EMBED_UI    1
#define DISTRHO_PLUGIN_HAS_EXTERNAL_UI 1

/**
   Wherever the plugin processing is realtime-safe.@n
   TODO - list rtsafe requirements
 */
#define DISTRHO_PLUGIN_IS_RT_SAFE 1

/**
   Wherever the plugin is a synth.@n
   @ref DISTRHO_PLUGIN_WANT_MIDI_INPUT is automatically enabled when this is too.
   @see DISTRHO_PLUGIN_WANT_MIDI_INPUT
 */
#define DISTRHO_PLUGIN_IS_SYNTH 0

/**
   Enable direct access between the %UI and plugin code.
   @see UI::getPluginInstancePointer()
   @note DO NOT USE THIS UNLESS STRICTLY NECESSARY!!
         Try to avoid it at all costs!
 */
#define DISTRHO_PLUGIN_WANT_DIRECT_ACCESS 0

/**
   Wherever the plugin introduces latency during audio or midi processing.
   @see Plugin::setLatency(uint32_t)
 */
#define DISTRHO_PLUGIN_WANT_LATENCY 0

/**
   Wherever the plugin wants MIDI input.@n
   This is automatically enabled if @ref DISTRHO_PLUGIN_IS_SYNTH is true.
 */
#define DISTRHO_PLUGIN_WANT_MIDI_INPUT 0

/**
   Wherever the plugin wants MIDI output.
   @see Plugin::writeMidiEvent(const MidiEvent&)
 */
#define DISTRHO_PLUGIN_WANT_MIDI_OUTPUT 0

/**
   Wherever the plugin provides its own internal programs.
   @see Plugin::initProgramName(uint32_t, String&)
   @see Plugin::loadProgram(uint32_t)
 */
#define DISTRHO_PLUGIN_WANT_PROGRAMS 0

/**
   Wherever the plugin uses internal non-parameter data.
   @see Plugin::initState(uint32_t, String&, String&)
   @see Plugin::setState(const char*, const char*)
 */
#define DISTRHO_PLUGIN_WANT_STATE 1

/**
   Wherever the plugin implements the full state API.
   When this macro is enabled, the plugin must implement a new getState(const char* key) function, which the host calls when saving its session/project.
   This is useful for plugins that have custom internal values not exposed to the host as key-value state pairs or parameters.
   Most simple effects and synths will not need this.
   @note this macro is automatically enabled if a plugin has programs and state, as the key-value state pairs need to be updated when the current program changes.
   @see Plugin::getState(const char*)
 */
#define DISTRHO_PLUGIN_WANT_FULL_STATE 1

/**
   Wherever the plugin wants time position information from the host.
   @see Plugin::getTimePosition()
 */
#define DISTRHO_PLUGIN_WANT_TIMEPOS 0

/**
   Wherever the %UI uses NanoVG for drawing instead of the default raw OpenGL calls.@n
   When enabled your %UI instance will subclass @ref NanoWidget instead of @ref Widget.
 */
#define DISTRHO_UI_USE_NANOVG 0

/**
   Wherever the %UI is resizable to any size by the user.@n
   By default this is false, and resizing is only allowed under the plugin UI control,@n
   Enabling this options makes it possible for the user to resize the plugin UI at anytime.
   @see UI::setGeometryConstraints(uint, uint, bool, bool)
 */
#define DISTRHO_UI_USER_RESIZABLE 0

/**
   The %UI URI when exporting in LV2 format.@n
   By default this is set to @ref DISTRHO_PLUGIN_URI with "#UI" as suffix.
 */
#define DISTRHO_UI_URI DISTRHO_PLUGIN_URI "#UI"

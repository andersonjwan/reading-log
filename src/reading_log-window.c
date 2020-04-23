/* reading_log-window.c
 *
 * Copyright 2020 andersonjwan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "reading_log-config.h"
#include "reading_log-window.h"

struct _ReadingLogWindow
{
  GtkApplicationWindow  parent_instance;

};

G_DEFINE_TYPE (ReadingLogWindow, reading_log_window, GTK_TYPE_APPLICATION_WINDOW)

static void
reading_log_window_class_init (ReadingLogWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/com/github/andersonjwan/ReadingLog/ui/main.ui");
}

static void
reading_log_window_init (ReadingLogWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}

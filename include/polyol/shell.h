/* shell.h generated by valac 0.10.1, the Vala compiler, do not modify */


#ifndef __POLYOL_SHELL_H__
#define __POLYOL_SHELL_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <polyol/env.h>

G_BEGIN_DECLS


#define SUGAR_TYPE_SHELL (sugar_shell_get_type ())
#define SUGAR_SHELL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SUGAR_TYPE_SHELL, SugarShell))
#define SUGAR_SHELL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SUGAR_TYPE_SHELL, SugarShellClass))
#define SUGAR_IS_SHELL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SUGAR_TYPE_SHELL))
#define SUGAR_IS_SHELL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SUGAR_TYPE_SHELL))
#define SUGAR_SHELL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SUGAR_TYPE_SHELL, SugarShellClass))

typedef struct _SugarShell SugarShell;
typedef struct _SugarShellClass SugarShellClass;
typedef struct _SugarShellPrivate SugarShellPrivate;

#define SUGAR_TYPE_JOURNAL (sugar_journal_get_type ())
#define SUGAR_JOURNAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SUGAR_TYPE_JOURNAL, SugarJournal))
#define SUGAR_JOURNAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SUGAR_TYPE_JOURNAL, SugarJournalClass))
#define SUGAR_IS_JOURNAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SUGAR_TYPE_JOURNAL))
#define SUGAR_IS_JOURNAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SUGAR_TYPE_JOURNAL))
#define SUGAR_JOURNAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SUGAR_TYPE_JOURNAL, SugarJournalClass))

typedef struct _SugarJournal SugarJournal;
typedef struct _SugarJournalClass SugarJournalClass;
typedef struct _SugarJournalPrivate SugarJournalPrivate;

struct _SugarShell {
	GObject parent_instance;
	SugarShellPrivate * priv;
};

struct _SugarShellClass {
	GObjectClass parent_class;
};

struct _SugarJournal {
	GObject parent_instance;
	SugarJournalPrivate * priv;
};

struct _SugarJournalClass {
	GObjectClass parent_class;
};


GType sugar_shell_get_type (void) G_GNUC_CONST;
gboolean sugar_shell_get_activity (SugarShell* self, const char* bundle_id, SugarActivityInfo* _result_);
SugarShell* sugar_shell_new (void);
SugarShell* sugar_shell_construct (GType object_type);
gboolean sugar_shell_get_active (SugarShell* self);
GType sugar_journal_get_type (void) G_GNUC_CONST;
void sugar_journal_choose_object (SugarJournal* self, const char* what);
void sugar_journal_show_object (SugarJournal* self, const char* object_id);
SugarJournal* sugar_journal_new (void);
SugarJournal* sugar_journal_construct (GType object_type);


G_END_DECLS

#endif

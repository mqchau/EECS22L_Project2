#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include "Image.h"
#include "ImageList.h"
#include "uthash.h"
#include "utstring.h"
#define MAX_HASH_KEY_LENGTH 20

typedef struct ViewHandleStruct ViewHandle;

typedef struct {
	/*EventClass event;*/
#ifndef TEST_VIEW
	ILIST * ImageStack;
#endif
	/*if necessary*/
	/*ModelHandle * MainModelHandle;*/
	ViewHandle * MainViewHandle;
	UT_string * InputImageFileName;
} ControlHandle;

typedef struct {
	char Name[MAX_HASH_KEY_LENGTH];
	GtkWidget * Widget;
	UT_hash_handle HashByName;
	UT_hash_handle HashByWidget;
	ViewHandle * MainViewHandle;
} ObjectHandle;

struct ViewHandleStruct {
	ObjectHandle * ObjectListByName, * ObjectListByWidget;
	ControlHandle * MainControlHandle;
};



#endif
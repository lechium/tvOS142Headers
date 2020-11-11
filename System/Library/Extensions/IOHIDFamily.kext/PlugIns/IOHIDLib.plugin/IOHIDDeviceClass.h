/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDPlugin.h>

@class IOHIDQueueClass, NSMutableArray, NSMutableDictionary;

@interface IOHIDDeviceClass : IOHIDPlugin {

	IOHIDDeviceTimeStampedDeviceInterface* _device;
	unsigned _service;
	unsigned _connect;
	unsigned _port;
	CFMachPortRef _machPort;
	CFRunLoopSourceRef _runLoopSource;
	BOOL _opened;
	BOOL _tccRequested;
	BOOL _tccGranted;
	IOHIDQueueClass* _queue;
	NSMutableArray* _elements;
	NSMutableArray* _sortedElements;
	NSMutableArray* _reportElements;
	NSMutableDictionary* _properties;
	/*function pointer*/void* _inputReportCallback;
	/*function pointer*/void* _inputReportTimestampCallback;
	void* _inputReportContext;
	char* _inputReportBuffer;
	long long _inputReportBufferLength;

}

@property (readonly) unsigned port;                                 //@synthesize port=_port - In the implementation block
@property (readonly) CFRunLoopSourceRef runLoopSource;              //@synthesize runLoopSource=_runLoopSource - In the implementation block
@property (readonly) unsigned connect;                              //@synthesize connect=_connect - In the implementation block
@property (readonly) unsigned service;                              //@synthesize service=_service - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned)port;
-(int)stop;
-(unsigned)service;
-(unsigned)connect;
-(CFRunLoopSourceRef)runLoopSource;
-(int)setProperty:(id)arg1 property:(id)arg2 ;
-(int)open:(unsigned)arg1 ;
-(int)close:(unsigned)arg1 ;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)probe:(id)arg1 service:(unsigned)arg2 outScore:(int*)arg3 ;
-(int)start:(id)arg1 service:(unsigned)arg2 ;
-(int)setValue:(IOHIDElementRef)arg1 value:(IOHIDValueRef)arg2 timeout:(unsigned)arg3 callback:(/*function pointer*/void*)arg4 context:(void*)arg5 options:(unsigned)arg6 ;
-(int)getValue:(IOHIDElementRef)arg1 value:(_IOHIDValue*)arg2 timeout:(unsigned)arg3 callback:(/*function pointer*/void*)arg4 context:(void*)arg5 options:(unsigned)arg6 ;
-(int)getAsyncEventSource:(const void*)arg1 ;
-(IOHIDElementRef)getElement:(unsigned)arg1 ;
-(void)releaseOOBReport:(unsigned long long)arg1 ;
-(void)valueAvailableCallback:(int)arg1 ;
-(void)initPort;
-(int)initElements;
-(int)initConnect;
-(id)propertyForElementKey:(id)arg1 ;
-(id)copyObsoleteDictionary:(id)arg1 ;
-(void)initQueue;
-(int)getProperty:(id)arg1 property:(const void*)arg2 ;
-(int)copyMatchingElements:(id)arg1 elements:(const _CFArray*)arg2 options:(unsigned)arg3 ;
-(int)setInputReportCallback:(char*)arg1 reportLength:(long long)arg2 callback:(/*function pointer*/void*)arg3 context:(void*)arg4 options:(unsigned)arg5 ;
-(int)setReport:(int)arg1 reportID:(unsigned)arg2 report:(const char*)arg3 reportLength:(long long)arg4 timeout:(unsigned)arg5 callback:(/*function pointer*/void*)arg6 context:(void*)arg7 options:(unsigned)arg8 ;
-(int)getReport:(int)arg1 reportID:(unsigned)arg2 report:(char*)arg3 reportLength:(long long*)arg4 timeout:(unsigned)arg5 callback:(/*function pointer*/void*)arg6 context:(void*)arg7 options:(unsigned)arg8 ;
-(int)setInputReportWithTimeStampCallback:(char*)arg1 reportLength:(long long)arg2 callback:(/*function pointer*/void*)arg3 context:(void*)arg4 options:(unsigned)arg5 ;
@end


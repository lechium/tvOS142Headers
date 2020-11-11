/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWFigCaptureISPProcessingSessionDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface BWFigCaptureISPProcessingSession : NSObject {

	OpaqueFigCaptureISPProcessingSessionRef _session;
	NSDictionary* _supportedProperties;
	NSMutableDictionary* _cachedProperties;
	id<BWFigCaptureISPProcessingSessionDelegate> _delegate;
	BOOL _invalidated;
	os_unfair_lock_s _lock;

}

@property (readonly) NSDictionary * supportedProperties; 
@property (readonly) OpaqueFigCaptureISPProcessingSessionRef figCaptureISPProcessingSession; 
+(void)initialize;
-(void)dealloc;
-(int)invalidate;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(int)flush;
-(NSDictionary *)supportedProperties;
-(id)copyProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)setProperty:(CFStringRef)arg1 value:(id)arg2 ;
-(id)getProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(OpaqueFigCaptureISPProcessingSessionRef)figCaptureISPProcessingSession;
-(int)prepareWithHandler:(/*^block*/id)arg1 ;
-(int)processBuffer:(CVBufferRef)arg1 refCon:(void*)arg2 outputDescriptors:(SCD_Struct_BW126*)arg3 numOutputDescriptors:(int)arg4 parameters:(id)arg5 ;
-(id)initWithFigCaptureISPProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 ;
@end


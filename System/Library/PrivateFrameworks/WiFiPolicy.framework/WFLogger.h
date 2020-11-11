/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <WiFiPolicy/WiFiPolicy-Structs.h>
@class WFLoggerBase, NSObject, NSNumber;

@interface WFLogger : NSObject {

	WFLoggerBase* _loggerBase;
	unsigned long long _destination;
	unsigned long long _privacy;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned char _wflRunningOnWatchClassDevice;
	unsigned char _wflEnableDualLoggingOnWatchClassDevice;

}

@property (getter=getLogLifespanInDays,copy,readonly) NSNumber * logLifespanInDays; 
@property (getter=getLogLevelEnable,readonly) unsigned long long logLevelEnable; 
@property (getter=getLogLevelPersist,readonly) unsigned long long logLevelPersist; 
@property (getter=getDestination,readonly) unsigned long long destination; 
@property (getter=getLogPrivacy,readonly) unsigned long long logPrivacy; 
@property (getter=getMaxFileSizeInMB,readonly) unsigned long long maxFileSizeInMB; 
+(id)sharedWFLoggerSingleton;
-(id)init;
-(void)dump;
-(void)WFLog:(unsigned long long)arg1 message:(const char*)arg2 ;
-(id)getLogLifespanInDays;
-(unsigned long long)getLogPrivacy;
-(unsigned long long)getLogLevelEnable;
-(unsigned long long)getLogLevelPersist;
-(unsigned long long)getMaxFileSizeInMB;
-(void)setDestinationOsLog:(CFStringRef)arg1 category:(CFStringRef)arg2 logLifespanInDays:(unsigned long long)arg3 logLevel:(unsigned long long)arg4 logPrivacy:(unsigned long long)arg5 ;
-(unsigned long long)getDestination;
-(id)loggerBase;
-(void)setDestinationCircularBuffer;
-(void)setDestinationFile:(CFStringRef)arg1 runLoopRef:(CFRunLoopRef)arg2 runLoopMode:(CFStringRef)arg3 classC:(unsigned char)arg4 dateFormatter:(CFDateFormatterRef)arg5 maxFileSizeInMB:(unsigned long long)arg6 logLifespanInDays:(unsigned long long)arg7 ;
-(void)setDestinationFileLocation:(CFStringRef)arg1 fileNamePrefix:(CFStringRef)arg2 runLoopRef:(CFRunLoopRef)arg3 runLoopMode:(CFStringRef)arg4 classC:(unsigned char)arg5 dateFormatter:(CFDateFormatterRef)arg6 maxFileSizeInMB:(unsigned long long)arg7 logLifespanInDays:(unsigned long long)arg8 ;
@end


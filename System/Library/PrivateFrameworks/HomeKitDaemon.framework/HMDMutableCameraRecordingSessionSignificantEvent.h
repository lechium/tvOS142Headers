/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDCameraRecordingSessionSignificantEvent.h>

@class NSDate, NSUUID, NSSet, NSData;

@interface HMDMutableCameraRecordingSessionSignificantEvent : HMDCameraRecordingSessionSignificantEvent

@property (assign) unsigned long long reason; 
@property (copy) NSDate * dateOfOccurrence; 
@property (assign) unsigned long long confidenceLevel; 
@property (copy) NSUUID * sessionEntityUUID; 
@property (copy) NSSet * faceClassifications; 
@property (retain) NSData * heroFrameData; 
@property (retain) NSData * faceCropData; 
@property (assign) double timeOffsetWithinClip; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end


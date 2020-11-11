/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMCameraRecordingEvent.h>

@class NSUUID, NSDate, NSArray, NSSet, NSString, HMCameraClipEncryptionContext, NSData, NSDictionary;

@interface HMCameraClip : NSObject <NSCopying, NSSecureCoding, HMCameraRecordingEvent> {

	BOOL _complete;
	BOOL _donated;
	NSUUID* _uniqueIdentifier;
	NSDate* _startDate;
	double _duration;
	double _targetFragmentDuration;
	NSArray* _posterFrames;
	NSSet* _significantEvents;
	NSString* _streamingAssetVersion;
	HMCameraClipEncryptionContext* _encryptionContext;
	NSArray* _videoSegments;

}

@property (copy,readonly) NSString * streamingAssetVersion;                               //@synthesize streamingAssetVersion=_streamingAssetVersion - In the implementation block
@property (copy,readonly) HMCameraClipEncryptionContext * encryptionContext;              //@synthesize encryptionContext=_encryptionContext - In the implementation block
@property (copy,readonly) NSArray * videoSegments;                                        //@synthesize videoSegments=_videoSegments - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy,readonly) NSDate * startDate;                                             //@synthesize startDate=_startDate - In the implementation block
@property (readonly) double duration;                                                     //@synthesize duration=_duration - In the implementation block
@property (getter=isComplete,readonly) BOOL complete;                                     //@synthesize complete=_complete - In the implementation block
@property (getter=isDonated,readonly) BOOL donated;                                       //@synthesize donated=_donated - In the implementation block
@property (readonly) double targetFragmentDuration;                                       //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (copy,readonly) NSData * encryptionKey; 
@property (copy,readonly) NSArray * posterFrames;                                         //@synthesize posterFrames=_posterFrames - In the implementation block
@property (copy,readonly) NSArray * videoDataSegments; 
@property (copy,readonly) NSSet * significantEvents;                                      //@synthesize significantEvents=_significantEvents - In the implementation block
@property (copy,readonly) NSDictionary * videoAssetRequiredHTTPHeaders; 
@property (readonly) BOOL canAskForUserFeedback; 
@property (copy,readonly) NSDate * dateOfOccurrence; 
+(BOOL)supportsSecureCoding;
+(id)requiredHTTPHeadersForStreamingAssetVersion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSDate *)startDate;
-(double)duration;
-(BOOL)isComplete;
-(NSData *)encryptionKey;
-(double)targetFragmentDuration;
-(BOOL)isDonated;
-(NSString *)streamingAssetVersion;
-(HMCameraClipEncryptionContext *)encryptionContext;
-(NSArray *)posterFrames;
-(NSArray *)videoSegments;
-(NSSet *)significantEvents;
-(BOOL)canAskForUserFeedback;
-(id)initWithUniqueIdentifier:(id)arg1 startDate:(id)arg2 duration:(double)arg3 targetFragmentDuration:(double)arg4 isComplete:(BOOL)arg5 isDonated:(BOOL)arg6 streamingAssetVersion:(id)arg7 encryptionContext:(id)arg8 posterFrames:(id)arg9 videoSegments:(id)arg10 significantEvents:(id)arg11 ;
-(NSDate *)dateOfOccurrence;
-(NSDictionary *)videoAssetRequiredHTTPHeaders;
-(NSArray *)videoDataSegments;
@end


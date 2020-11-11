/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventBinaryStepping.h>
#import <libobjc.A.dylib/BMEventTimeElapsing.h>
#import <libobjc.A.dylib/BMEventAppAssociating.h>

@class NSURL, NSString, NSDateInterval;

@interface BMMediaUsageEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating> {

	BOOL _usageTrusted;
	NSURL* _URL;
	NSURL* _mediaURL;

}

@property (nonatomic,copy) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSURL * mediaURL;                                       //@synthesize mediaURL=_mediaURL - In the implementation block
@property (assign,getter=isUsageTrusted,nonatomic) BOOL usageTrusted;              //@synthesize usageTrusted=_usageTrusted - In the implementation block
@property (assign,getter=isStarting,nonatomic) BOOL starting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double absoluteTimestamp; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * bundleID; 
-(NSString *)description;
-(id)init;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)isUsageTrusted;
-(NSURL *)mediaURL;
-(void)setMediaURL:(NSURL *)arg1 ;
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(id)initWithBegin:(BOOL)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 usageTrusted:(BOOL)arg5 timestamp:(id)arg6 ;
-(void)setUsageTrusted:(BOOL)arg1 ;
-(id)initWithBegin:(BOOL)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 timestamp:(id)arg5 ;
@end


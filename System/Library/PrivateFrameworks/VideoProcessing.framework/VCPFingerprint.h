/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VCPFingerprint : NSObject {

	NSString* _master;
	NSString* _adjusted;

}

@property (readonly) NSString * master;                //@synthesize master=_master - In the implementation block
@property (readonly) NSString * adjusted;              //@synthesize adjusted=_adjusted - In the implementation block
+(id)fingerprintWithMaster:(id)arg1 adjusted:(id)arg2 ;
-(id)description;
-(id)init;
-(NSString *)master;
-(id)initWithMaster:(id)arg1 adjusted:(id)arg2 ;
-(NSString *)adjusted;
-(BOOL)isEqualToFingerprint:(id)arg1 ;
@end

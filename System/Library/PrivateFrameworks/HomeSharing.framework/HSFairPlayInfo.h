/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <HomeSharing/HomeSharing-Structs.h>
@class NSObject, NSString;

@interface HSFairPlayInfo : NSObject {

	NSObject*<OS_dispatch_queue> _sapQueue;
	void* _hwInfo;
	void* _session;

}

@property (nonatomic,readonly) NSString * deviceGUID; 
-(id)init;
-(void)dealloc;
-(NSString *)deviceGUID;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(void)endSecuritySession;
-(id)_hexStringForData:(id)arg1 ;
-(id)beginNegotiationWithSAPVersion:(unsigned)arg1 ;
-(id)continueNegotationWithSAPVersion:(unsigned)arg1 data:(id)arg2 isComplete:(BOOL*)arg3 ;
-(id)securityInfoForURL:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface IDSStunConnectionDataController : NSObject {

	NSMutableDictionary* _tokenToConnectionData;
	NSMutableDictionary* _tokenToDeliveryStatus;

}
+(id)sharedInstance;
-(id)dataFromCandidates:(id)arg1 token:(id)arg2 ;
-(unsigned long long)deliveryStatus:(id)arg1 ;
-(void)setDeliveryStatus:(id)arg1 status:(unsigned long long)arg2 ;
-(id)candidatesFromData:(id)arg1 token:(id)arg2 ;
-(void)removeData:(id)arg1 ;
@end


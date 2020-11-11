/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface FAInviteCompletionInfo : NSObject {

	unsigned long long _transportType;
	NSArray* _recipients;
	unsigned long long _status;

}

@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) unsigned long long status;                     //@synthesize status=_status - In the implementation block
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(unsigned long long)transportType;
-(void)setTransportType:(unsigned long long)arg1 ;
-(id)_transportStringValue;
-(id)_completionStatusStringValue;
-(id)serverReadableDictionary;
@end


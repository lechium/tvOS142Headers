/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxSetFlagsRequest : DAMailboxRequest {

	unsigned long long _onFlags;
	unsigned long long _offFlags;

}

@property (assign,nonatomic) unsigned long long onFlags;               //@synthesize onFlags=_onFlags - In the implementation block
@property (assign,nonatomic) unsigned long long offFlags;              //@synthesize offFlags=_offFlags - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setOnFlags:(unsigned long long)arg1 ;
-(void)setOffFlags:(unsigned long long)arg1 ;
-(unsigned long long)onFlags;
-(unsigned long long)offFlags;
-(id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3 ;
@end


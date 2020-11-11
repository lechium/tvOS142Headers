/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data; 
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(unsigned char)command;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
@end


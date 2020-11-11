/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GPBUnknownFieldSet : NSObject <NSCopying> {

	CFDictionaryRef fields_;

}
+(BOOL)isFieldTag:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)data;
-(void)addField:(id)arg1 ;
-(unsigned long long)serializedSize;
-(id)mutableFieldForNumber:(int)arg1 create:(BOOL)arg2 ;
-(BOOL)hasField:(int)arg1 ;
-(id)getField:(int)arg1 ;
-(void)mergeFromData:(id)arg1 ;
-(void)getTags:(int*)arg1 ;
-(id)sortedFields;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(void)writeAsMessageSetTo:(id)arg1 ;
-(void)mergeMessageSetMessage:(int)arg1 data:(id)arg2 ;
-(BOOL)mergeFieldFrom:(int)arg1 input:(id)arg2 ;
-(void)addUnknownMapEntry:(int)arg1 value:(id)arg2 ;
-(void)mergeUnknownFields:(id)arg1 ;
-(unsigned long long)countOfFields;
-(unsigned long long)serializedSizeAsMessageSet;
-(void)mergeVarintField:(int)arg1 value:(int)arg2 ;
-(void)mergeFromCodedInputStream:(id)arg1 ;
@end


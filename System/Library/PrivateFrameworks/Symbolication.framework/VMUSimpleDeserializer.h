/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Symbolication/VMUAbstractSerializer.h>

@class NSData;

@interface VMUSimpleDeserializer : VMUAbstractSerializer {

	void* _cache;
	NSData* _data;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned)deserialize32WithError:(id*)arg1 ;
-(unsigned long long)deserialize64WithError:(id*)arg1 ;
-(id)copyDeserializedStringWithError:(id*)arg1 ;
-(id)copyDeserializedStringWithID:(unsigned)arg1 error:(id*)arg2 ;
-(void)skipFields:(unsigned)arg1 ;
-(const char*)copyDeserializedNullTerminatedBytesWithError:(id*)arg1 ;
-(unsigned*)_deserializeValues:(unsigned)arg1 error:(id*)arg2 ;
@end


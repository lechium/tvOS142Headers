/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ISHashError : NSObject <NSCopying> {

	NSString* _actualHashString;
	NSString* _expectedHashString;
	long long _rangeEnd;
	long long _rangeStart;

}

@property (nonatomic,copy) NSString * actualHashString;                         //@synthesize actualHashString=_actualHashString - In the implementation block
@property (nonatomic,copy) NSString * expectedHashString;                       //@synthesize expectedHashString=_expectedHashString - In the implementation block
@property (assign,nonatomic) long long rangeEnd;                                //@synthesize rangeEnd=_rangeEnd - In the implementation block
@property (assign,nonatomic) long long rangeStart;                              //@synthesize rangeStart=_rangeStart - In the implementation block
@property (nonatomic,readonly) NSString * hashFailureHeaderString; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setActualHashString:(NSString *)arg1 ;
-(void)setExpectedHashString:(NSString *)arg1 ;
-(void)setRangeEnd:(long long)arg1 ;
-(void)setRangeStart:(long long)arg1 ;
-(NSString *)hashFailureHeaderString;
-(NSString *)actualHashString;
-(NSString *)expectedHashString;
-(long long)rangeEnd;
-(long long)rangeStart;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SiriCoreSQLiteQueryRange : NSObject <NSCopying> {

	unsigned long long _limit;
	unsigned long long _offset;

}

@property (nonatomic,readonly) unsigned long long limit;               //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)offset;
-(unsigned long long)limit;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
@end


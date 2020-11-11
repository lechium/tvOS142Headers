/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTPair : NSObject <NSCopying, NSSecureCoding> {

	id _firstObject;
	id _secondObject;

}

@property (nonatomic,readonly) id firstObject;               //@synthesize firstObject=_firstObject - In the implementation block
@property (nonatomic,readonly) id secondObject;              //@synthesize secondObject=_secondObject - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)getClusterClassOfObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)firstObject;
-(id)secondObject;
-(id)initWithFirstObject:(id)arg1 secondObject:(id)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSIndexSet;

@interface VNPersonsModelReadOptions : NSObject <NSCopying, NSSecureCoding> {

	NSIndexSet* _acceptableVersions;

}

@property (nonatomic,copy) NSIndexSet * acceptableVersions;              //@synthesize acceptableVersions=_acceptableVersions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSIndexSet *)acceptableVersions;
-(void)setAcceptableVersions:(NSIndexSet *)arg1 ;
@end

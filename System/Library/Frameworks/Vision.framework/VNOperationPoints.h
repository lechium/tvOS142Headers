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

@interface VNOperationPoints : NSObject <NSCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)loadFromURL:(id)arg1 error:(id*)arg2 ;
+(id)errorForUnknownClassificationIdentifier:(id)arg1 ;
+(id)errorForUnimplementedMethod:(SEL)arg1 ;
+(id)unspecifiedOperationPoints;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)getDefaultConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)getConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id*)arg4 ;
-(BOOL)getPrecision:(float*)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id*)arg4 ;
-(BOOL)getConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id*)arg4 ;
-(BOOL)getRecall:(float*)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id*)arg4 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVDisplayCriteriaInternal;

@interface AVDisplayCriteria : NSObject <NSCopying> {

	AVDisplayCriteriaInternal* _displayCriteria;

}

@property (nonatomic,readonly) float refreshRate; 
@property (readonly) int videoDynamicRange; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(float)refreshRate;
-(int)videoDynamicRange;
-(id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@interface MiroCropZoomUtilities : NSObject
-(CGRect)horizontallyClampedImageRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(CGRect)verticallyClampedImageRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(BOOL)hasCompletedAnalysis:(id)arg1 ;
-(CGRect)clampImageRect:(CGRect)arg1 toImageSize:(CGSize)arg2 ;
-(CGRect)rectFromDesiredPosition:(SCD_Struct_Mi19)arg1 outputAspectRatio:(float)arg2 image:(id)arg3 ;
-(CGRect)adjustKBRect:(CGRect)arg1 toContainRect:(CGRect)arg2 withinImageSize:(CGSize)arg3 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

@interface AXMLayoutRegion : AXMLayoutItem {

	NSMutableArray* _lines;

}
+(id)region:(id)arg1 ;
-(void)addLine:(id)arg1 ;
-(CGRect)frame;
-(id)lines;
-(id)firstLine;
-(CGRect)normalizedFrame;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/ShotflowDetector.h>

@interface ShotflowDetectorANFDv1 : ShotflowDetector
+(id)filterThresholds;
+(id)supportedLabelKeys;
+(Class)shotflowNetworkClass;
-(id)initWithNetwork:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
@end


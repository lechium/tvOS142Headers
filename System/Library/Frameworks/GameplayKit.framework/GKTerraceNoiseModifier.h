/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GKNoiseModifier.h>

@interface GKTerraceNoiseModifier : GKNoiseModifier {

	double* _controlPoints;
	int _count;
	BOOL _inverted;

}
-(id)init;
-(void)dealloc;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithPeakInputValues:(id)arg1 terracesInverted:(BOOL)arg2 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end


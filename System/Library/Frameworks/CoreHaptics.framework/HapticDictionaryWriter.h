/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HapticDictionaryWriter : NSObject {

	unsigned long long _urlIndex;

}
-(id)eventToDictionary:(id)arg1 embeddedURLs:(id)arg2 ;
-(id)paramToDictionary:(id)arg1 ;
-(id)paramCurveToDictionary:(id)arg1 ;
-(id)eventParamsToArray:(id)arg1 ;
-(id)paramCurveControlPointsToArray:(id)arg1 ;
-(id)patternToDictionary:(id)arg1 events:(id)arg2 parameters:(id)arg3 parameterCurves:(id)arg4 embeddedURLs:(id)arg5 ;
@end


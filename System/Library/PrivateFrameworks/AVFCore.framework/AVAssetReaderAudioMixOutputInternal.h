/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, AVAudioMix, NSMutableDictionary, AVAudioOutputSettings, NSString;

@interface AVAssetReaderAudioMixOutputInternal : NSObject {

	NSArray* audioTracks;
	AVAudioMix* audioMix;
	NSMutableDictionary* audioVolumeCurvesForTracks;
	NSMutableDictionary* audioTimePitchAlgorithmsForTracks;
	NSMutableDictionary* audioTapProcessorsForTracks;
	AVAudioOutputSettings* audioOutputSettings;
	NSString* audioTimePitchAlgorithm;

}
@end


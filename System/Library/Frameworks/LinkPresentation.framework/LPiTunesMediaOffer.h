/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface LPiTunesMediaOffer : NSObject {

	BOOL _hasAudio;
	BOOL _hasVideo;
	NSURL* _previewURL;
	NSString* _type;

}

@property (nonatomic,copy,readonly) NSURL * previewURL;              //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasAudio;                        //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,readonly) BOOL hasVideo;                        //@synthesize hasVideo=_hasVideo - In the implementation block
+(id)typeForOffer:(id)arg1 ;
+(id)previewURLForOffer:(id)arg1 ;
+(BOOL)hasAudioForOffer:(id)arg1 ;
+(BOOL)hasVideoForOffer:(id)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasVideo;
-(NSURL *)previewURL;
-(BOOL)hasAudio;
@end


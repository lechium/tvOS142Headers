/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class ICStoreArtworkInfo, ICStoreVideoArtworkInfo, NSString, NSURL;

@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality> {

	long long _artworkInfoType;
	ICStoreArtworkInfo* _imageArtworkInfo;
	ICStoreVideoArtworkInfo* _videoArtworkInfo;
	NSString* _cropStyle;
	NSString* _format;
	NSString* _sourceEditorialArtworkKind;
	NSURL* _artworkURL;

}

@property (assign,nonatomic) long long artworkInfoType;                             //@synthesize artworkInfoType=_artworkInfoType - In the implementation block
@property (nonatomic,copy) ICStoreArtworkInfo * imageArtworkInfo;                   //@synthesize imageArtworkInfo=_imageArtworkInfo - In the implementation block
@property (nonatomic,copy) ICStoreVideoArtworkInfo * videoArtworkInfo;              //@synthesize videoArtworkInfo=_videoArtworkInfo - In the implementation block
@property (nonatomic,copy) NSString * cropStyle;                                    //@synthesize cropStyle=_cropStyle - In the implementation block
@property (nonatomic,copy) NSString * format;                                       //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * sourceEditorialArtworkKind;                   //@synthesize sourceEditorialArtworkKind=_sourceEditorialArtworkKind - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                                      //@synthesize artworkURL=_artworkURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)tokenWithImageArtworkInfo:(id)arg1 ;
+(id)tokenWithVideoArtworkInfo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(id)stringRepresentation;
-(NSURL *)artworkURL;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(long long)artworkInfoType;
-(void)setArtworkInfoType:(long long)arg1 ;
-(ICStoreArtworkInfo *)imageArtworkInfo;
-(void)setImageArtworkInfo:(ICStoreArtworkInfo *)arg1 ;
-(ICStoreVideoArtworkInfo *)videoArtworkInfo;
-(void)setVideoArtworkInfo:(ICStoreVideoArtworkInfo *)arg1 ;
-(NSString *)cropStyle;
-(void)setCropStyle:(NSString *)arg1 ;
-(NSString *)sourceEditorialArtworkKind;
-(void)setSourceEditorialArtworkKind:(NSString *)arg1 ;
@end


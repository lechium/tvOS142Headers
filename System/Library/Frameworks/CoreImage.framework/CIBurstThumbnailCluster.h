/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@class NSMutableArray, NSMutableDictionary, CIBurstYUVImage;

@interface CIBurstThumbnailCluster : NSObject {

	NSMutableArray* burstImages;
	/*^block*/id completionBlock;
	NSMutableDictionary* imageProps;
	CIBurstYUVImage* image;
	IOSurfaceRef _fullsizeJpegData;

}

@property (assign) NSMutableArray * burstImages; 
@property (assign) NSMutableDictionary * imageProps; 
@property (assign) CIBurstYUVImage * image; 
@property (assign) IOSurfaceRef fullsizeJpegData;                 //@synthesize fullsizeJpegData=_fullsizeJpegData - In the implementation block
@property (assign) id completionBlock; 
-(id)init;
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(CIBurstYUVImage *)image;
-(void)setImage:(CIBurstYUVImage *)arg1 ;
-(NSMutableArray *)burstImages;
-(void)releaseImage;
-(NSMutableDictionary *)imageProps;
-(id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addItemsFromCluster:(id)arg1 ;
-(void)setFullsizeJpegData:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)fullsizeJpegData;
-(void)setImageProps:(NSMutableDictionary *)arg1 ;
-(float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3 ;
-(void)setBurstImages:(NSMutableArray *)arg1 ;
@end


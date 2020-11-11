/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, NSString;

@interface MKPublisherIcon : NSObject {

	UIImage* _publisherImage;
	NSString* _publisherName;

}

@property (nonatomic,readonly) UIImage * publisherImage;              //@synthesize publisherImage=_publisherImage - In the implementation block
@property (nonatomic,readonly) NSString * publisherName;              //@synthesize publisherName=_publisherName - In the implementation block
-(id)initUsingName:(id)arg1 andImage:(id)arg2 ;
-(UIImage *)publisherImage;
-(NSString *)publisherName;
@end

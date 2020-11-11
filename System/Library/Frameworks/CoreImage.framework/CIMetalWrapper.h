/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class NSMutableDictionary, NSString;

@interface CIMetalWrapper : CIFilter {

	NSMutableDictionary* _dict;
	NSString* inputFilterName;

}

@property (retain) NSMutableDictionary * _dict;              //@synthesize dict=_dict - In the implementation block
@property (copy) NSString * inputFilterName; 
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)_dict;
-(id)attributes;
-(id)outputImage;
-(id)inputKeys;
-(id)dummyImagesForImages:(id)arg1 ;
-(void)set_dict:(NSMutableDictionary *)arg1 ;
-(NSString *)inputFilterName;
-(void)setInputFilterName:(NSString *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSData, NSURL;


@protocol INImageExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * _identifier; 
@property (setter=_setImageData:,nonatomic,copy) NSData * _imageData; 
@property (setter=_setUri:,nonatomic,copy) NSURL * _uri; 
@property (setter=_setName:,nonatomic,copy) NSString * _name; 
@property (setter=_setBundlePath:,nonatomic,copy) NSString * _bundlePath; 
@required
+(id)imageNamed:(id)arg1;
+(id)imageWithImageData:(id)arg1;
+(id)imageWithURL:(id)arg1;
-(id)init;
-(NSString *)_name;
-(NSString *)_identifier;
-(NSString *)_bundlePath;
-(NSData *)_imageData;
-(void)_setName:(id)arg1;
-(NSURL *)_uri;
-(void)_setImageData:(id)arg1;
-(void)_setUri:(id)arg1;
-(void)_setBundlePath:(id)arg1;

@end


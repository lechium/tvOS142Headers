/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, NSURL;


@protocol WLKInstallable <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * appBundleIDs; 
@property (nonatomic,copy,readonly) NSArray * appAdamIDs; 
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
@required
-(NSString *)name;
-(NSURL *)appStoreURL;
-(NSArray *)appAdamIDs;
-(NSArray *)appBundleIDs;
-(id)appIconURLForSize:(CGSize)arg1;

@end


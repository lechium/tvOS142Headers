/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet;


@protocol TVSAccountsCacheObserver
@property (nonatomic,copy,readonly) NSSet * registeredAccountIdentifiers; 
@required
-(void)accountsCacheDidModifyAccount:(id)arg1;
-(void)accountsCacheDidModifyPrimaryAppleAccount:(id)arg1;
-(NSSet *)registeredAccountIdentifiers;

@end


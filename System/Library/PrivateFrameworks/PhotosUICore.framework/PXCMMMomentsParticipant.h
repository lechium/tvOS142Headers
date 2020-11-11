/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXRecipient.h>

@class NSString, PHPerson;

@interface PXCMMMomentsParticipant : PXRecipient {

	NSString* _additionalLocalizedName;
	PHPerson* _person;

}

@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
-(id)localizedName;
-(PHPerson *)person;
-(id)initWithPerson:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 phoneNumber:(id)arg2 localizedName:(id)arg3 ;
@end

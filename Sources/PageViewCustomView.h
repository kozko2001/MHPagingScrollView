//
//  PageViewCustomView.h
//  Paging
//
//  Created by Jordi Coscolla on 30/08/12.
//  Copyright (c) 2012 Hollance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageViewCustomView : UIView
{
    IBOutlet UILabel    *titleLabel;
    IBOutlet UILabel    *subtitleLabel;
    IBOutlet UIImageView    *previewImage;
}

@property (nonatomic, retain) IBOutlet UILabel *titleLabel;
@property (nonatomic, retain) IBOutlet UILabel *subtitleLabel;
@property (nonatomic, retain) IBOutlet UIImageView *previewImage;


@end

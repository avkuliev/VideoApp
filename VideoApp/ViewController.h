//
//  ViewController.h
//  VideoApp
//
//  Created by Alexander Kuliev on 10/4/14.
//  Copyright (c) 2014 Alexander Kuliev. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MPMoviePlayerController;

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) NSURL *videoURL;
@property (strong, nonatomic) MPMoviePlayerController *videoController;

- (IBAction)captureVideo:(id)sender;

@end

//
//  timViewController.h
//  quizRock
//
//  Created by Timothy Ford on 2/10/13.
//  Copyright (c) 2013 Timothy Ford. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface timViewController : UIViewController  {

UILabel *correctIncorrect;
UILabel *questionText;
UITextField *answerText;
UIImageView *imageText;
    NSArray *qRImages;
    NSArray *qRQuestions;
    NSArray *qRAnswers;
    
}

@property (nonatomic, retain) IBOutlet UILabel *correctIncorrect;
@property (nonatomic, retain) IBOutlet UILabel *questionText;
@property (nonatomic, retain) IBOutlet UITextField *answerText;
@property (nonatomic, retain) IBOutlet UIImageView *imageText;
@property (nonatomic, retain) NSArray *qRImages;
@property (nonatomic, retain) NSArray *qRQuestions;
@property (nonatomic, retain) NSArray *qRAnswers;



-(IBAction)submit:(id)sender;
-(IBAction)next:(id)sender;


@end

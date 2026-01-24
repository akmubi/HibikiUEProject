#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/SlateWrapperTypes.h"
#include "HbkBNetComponentBaseWidget.h"
#include "HbkBNetFieldWidget.generated.h"

class UAkAudioEvent;
class UBorder;
class UHbkBNetTextBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetFieldWidget : public UHbkBNetComponentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVirtualKeyboardType::Type> KeyboardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* FrameBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EmptyLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ErrorMessageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetTextBox* ValueTextBox;
    
public:
    UHbkBNetFieldWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
};


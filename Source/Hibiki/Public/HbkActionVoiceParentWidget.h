#pragma once
#include "CoreMinimal.h"
#include "HbkTalkDataRow.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkActionVoiceParentWidget.generated.h"

class UHbkActionVoiceWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkActionVoiceParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ViewArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkActionVoiceWidget> LongSizeWidgetClass;
    
public:
    UHbkActionVoiceParentWidget();

    UFUNCTION(BlueprintCallable)
    void ClearbyID(const FName RowID);
    
    UFUNCTION(BlueprintCallable)
    void AllClear();
    
    UFUNCTION(BlueprintCallable)
    void AddVoiceWidget(const FHbkTalkDataRow& InTalkLine, const FName RowID);
    
};


#pragma once 
#include <WB_CharacterSelect_CharacterList_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C
// Size: 0x380(Inherited: 0x330)
struct UWB_CharacterSelect_CharacterList_C : UCharacterSelectCharListWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x330 (0x330)
	struct UTextBlock* CurrentPage;  // 0x338 (0x338)
	struct UHorizontalBox* HBox_ListPagePrevNext;  // 0x340 (0x340)
	struct UHorizontalBox* HorizontalBox_1;  // 0x348 (0x348)
	struct UImage* Img_PagePrevNextLine;  // 0x350 (0x350)
	struct UTextBlock* MaxPage;  // 0x358 (0x358)
	struct UWB_CommonBtn_M_C* WB_Btn_CreateCharacter;  // 0x360 (0x360)
	struct UWB_CommonBtn_S_C* WB_Btn_DeleteCharacter;  // 0x368 (0x368)
	struct UWB_CommonBtn_Arrow_C* WB_CommonBtn_Arrow_L;  // 0x370 (0x370)
	struct UWB_CommonBtn_Arrow_C* WB_CommonBtn_Arrow_R;  // 0x378 (0x378)


	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.BP_GetDesiredFocusTarget
	void OnMessageReceived_4E9C9CDB4FAD9424B435B5BAC35B9390(struct UMsgBaseNode* ProxyObject); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.OnMessageReceived_4E9C9CDB4FAD9424B435B5BAC35B9390
	void Construct(); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.Construct
	void OnPageNumber(int32_t CurrentPage, int32_t MaxPage); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.OnPageNumber
	void EventCharacterDeleteClicked(); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.EventCharacterDeleteClicked
	void BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature(uint8_t Invisibility); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature
	void BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_201_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature(uint8_t Invisibility); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_201_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature
	void CharacterListLeftButtonClicked(struct UCommonButtonBase* Button); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.CharacterListLeftButtonClicked
	void CharacterListRightButtonClicked(struct UCommonButtonBase* Button); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.CharacterListRightButtonClicked
	void CharacterCreateButtonClicked(struct UCommonButtonBase* Button); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.CharacterCreateButtonClicked
	void _1(struct UCommonButtonBase* Button); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C._1
	void ExecuteUbergraph_WB_CharacterSelect_CharacterList(int32_t EntryPoint); // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.ExecuteUbergraph_WB_CharacterSelect_CharacterList
}; 
 
 


